const vacantFloors = [2, 3, 4, 5, 7, 8, 9]; // 空いているフロア
const serialFloors = bundleSerialFloors(vacantFloors);
serialFloors.forEach((str) => {
  console.log(str);
});

function bundleSerialFloors(floors) {
  var serialFloors = []; // 連続して空いている階を ${serialFirst}-${serialLast} フォーマットで格納する配列
  var currentFloor = floors[0]; // 現在の階
  var serialFirst = 0; // 連続して空いている最初の階
  var serialLast = 0; // 連続して空いている最後の階

  for (i = 0; i < floors.length; i++) {
    currentFloor = floors[i];
    nextFloor = floors[i + 1];

    if (!nextFloor) {
      if (!serialFirst) break;
      serialLast = currentFloor;
    } else {
      var isNextFloorSerial = nextFloor - currentFloor == 1; // 次の階が連続しているか
      // 連続する最初の階がまだ見つかっていない場合
      if (!serialFirst) {
        if (isNextFloorSerial) {
          serialFirst = currentFloor;
        }
        continue;
      }
      // 連続する最初の階が見つかっている場合
      if (!isNextFloorSerial) {
        serialLast = currentFloor;
      }
    }

    // 連続する最初の階と最後の階が見つかっている場合
    if (serialFirst && serialLast) {
      serialFloors.push(serialFirst + "-" + serialLast);

      // 初期化し、次の連続する階を探す
      serialFirst = 0;
      serialLast = 0;
    }
  }
  return serialFloors;
}
