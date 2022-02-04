// 要件: 連続して空いているフロアをまとめた文字列を作成する
// 例1: [2,3,4,5] -> "2-5"
// 例2: [2,3,4,5,7,8,9] -> "2-5","7-9"
// 前提: 階数は自然数とする

const vacantFloors = [2, 3, 4, 5, 7, 8, 9]; // 空いているフロア
const serialFloors = bundleSerialFloors(vacantFloors);
serialFloors.forEach((str) => {
  console.log(str);
});

function bundleSerialFloors(floors) {
  var serialFloors = []; // 連続して空いている階を ${serialFirst}-${serialLast} フォーマットで格納する配列
  var currentFloor = floors[0]; // 現在の階
  var serialFirstFloor = 0; // 連続して空いている最初の階
  var serialLastFloor = 0; // 連続して空いている最後の階

  for (i = 0; i < floors.length; i++) {
    currentFloor = floors[i];
    nextFloor = floors[i + 1];

    if (!nextFloor) {
      if (!serialFirstFloor) break;
      serialLastFloor = currentFloor;
    } else {
      var isNextFloorSerial = nextFloor - currentFloor == 1; // 次の階が連続しているか
      // 連続する最初の階がまだ見つかっていない場合
      if (!serialFirstFloor) {
        if (isNextFloorSerial) {
          serialFirstFloor = currentFloor;
        }
        continue;
      }
      // 連続する最初の階が見つかっている場合
      if (!isNextFloorSerial) {
        serialLastFloor = currentFloor;
      }
    }

    // 連続する最初の階と最後の階が見つかっている場合
    if (serialFirstFloor && serialLastFloor) {
      serialFloors.push(serialFirstFloor + "-" + serialLastFloor);

      // 初期化し、次の連続する階を探す
      serialFirstFloor = 0;
      serialLastFloor = 0;
    }
  }
  return serialFloors;
}
