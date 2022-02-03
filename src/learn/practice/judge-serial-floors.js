const vacantFloors = [2, 3, 4, 5, 7, 8, 9]; // 空いているフロア
const serialFloors = bundleSerialFloors(vacantFloors);
serialFloors.forEach((str) => {
  console.log(str);
});

function bundleSerialFloors(floors) {
  var first = 0; // 連続して空いている最初の階
  var last = 0; // 連続して空いている最後の階

  var currentFloor = floors[0]; // 現在の階
  var serialFloors = []; // 連続して空いている階を ${first}-${last} フォーマットで格納する配列

  for (i = 0; i < floors.length; i++) {
    currentFloor = floors[i];
    nextFloor = floors[i + 1];

    if (!nextFloor) {
      if (!first) break;
      last = currentFloor;
    } else {
      var isNextFloorSerial = nextFloor - currentFloor == 1; // 次の階が連続しているか
      // 連続する最初の階がまだ見つかっていない場合
      if (!first) {
        if (isNextFloorSerial) {
          first = currentFloor;
        }
        continue;
      }
      // 連続する最初の階が見つかっている場合
      if (!isNextFloorSerial) {
        last = currentFloor;
      }
    }

    // 連続する最初の階と最後の階が見つかっている場合
    if (first && last) {
      serialFloors.push(first + "-" + last);

      // 連続する最初の階と最後の階を初期化し、次の連続する階を探す
      first = 0;
      last = 0;
    }
  }
  return serialFloors;
}
