// 人数peopleと宿泊日数dayが与えられるので、民泊の合計金額を返す、
// vacationRentalという関数を作成してください

// 3泊以下で80$
// 4で60$
// 10で50$

// 各12%の清掃費加算
// 全体に8％の税金
// 少数は切り捨て

function vacationRental(people, day) {
  let hotelFee = 0;
  const cleaningFee = 1.12;
  const tax = 1.08;
  if (3 >= day) {
    hotelFee = 80;
  } else if (10 <= day) {
    hotelFee = 50;
  } else {
    hotelFee = 60;
  }
  const totalHotelFee = hotelFee * cleaningFee;
  const totalFee = Math.floor(people * day * totalHotelFee * tax);
  return totalFee;
}
