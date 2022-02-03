// 2-5を取得するには何が必要か？
// 最初の値と、最後の値
// 最初の値はどうやったら求まる？
// 配列を走査して、最初にf[i+1] - f[i] = 1になるところ
// 最後の値はどうやったら求まる？
// 最初のfloorからはじめて、最後にf[i+1] - f[i]が 1以外になるところ
// or
// f[i+1]がなくなるところ

var vacantFloors = [2, 3, 4, 5, 7, 8, 9];

var first = 0;
var last = 0;
var currentFloor = vacantFloors[0];
var serialFloors = [];

for (i = 0; i < vacantFloors.length; i++) {
  currentFloor = vacantFloors[i];
  nextFloor = vacantFloors[i + 1];
  if (!nextFloor) {
    if (first != 0 && last == 0) {
      last = currentFloor;
    } else {
      break;
    }
  }
  if (nextFloor - currentFloor == 1) {
    if (first == 0) {
      first = currentFloor;
      continue;
    }
  } else {
    if (first == 0) {
      continue;
    } else {
      last = currentFloor;
      serialFloors.push(first + "-" + last);
      first = 0;
      last = 0;
    }
  }
}

serialFloors.forEach((str) => {
  console.log(str);
});
