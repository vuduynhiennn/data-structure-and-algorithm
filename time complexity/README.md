# Cấu trúc dữ liệu và giải thuật Nguyễn Văn Linh

## Kĩ thuật phân tích đánh giá giải thuật phần 1 

Thuật toán là cách giải bài toán trên may tính, thông thường 1 bài toán co nhiều cách giải vì vậy cho nên phân tích đánh giá thuật toán để lựa chọn thuật toán tốt nhất trong thuật toán để viết chương trình, cải tiết thuật toán để có thuật toán tốt hơn 

khi muốn đánh giá cần có tiêu chuẩn để đánh giá
dựa vào

1. thực hiện đúng
2. tốn ít bộ nhớ
3. hiệu quả về mặt thời gian

**Thời gian thực hiện chương trình**
 là một hàm của kích thước dữ liệu vào, kí hiểu T(n) trong đó n là kích thước của dữ liệu vào  (T(n) >= 0)

 đơn vị đo chương trình: không phải giờ, phút, giây mà là lệnh có thể thực thi ở trong một máy tính lí tưởng

 trường hợp tốt nhất, xấu nhất và trung bình

| | | | | | | | | 
|-|-|-|-|-|-|-|-|
| __0__ | 1 | 2 | __3__ | 4 | 5 | 6 | __7__ |
| | | | | | | | | 

**Lựa chọn thuật toán như thế nào**

T1(n) = 100n<sup>2</sup>

T2(n) = 5n<sup>3</sup>

lựa chọn thuật toán dựa theo mức độ dữ liệu, chọn thuật toán đơn giản với phần đông
đối với 2 đa thức nếu bỏ qua hết tất cả nhưng số hạng khác 

vd T1(n) = O(n<sup>2</sup>), T2(n) = O(n<sup>3</sup>)

có thể bỏ qua hằng số 

log<sub>2</sub>n, nlog<sub>2</sub>n, n<sup>2</sup>,  n<sup>3</sup>,  2<sup>n</sup>, n!,  n<sup>n</sup>


Quy tắc cộng và quy tắc nhân

nối tiếp nhau quy tắc cộng

p1 p2 lồng nhau thì độ phức tạp sử dụng quy tắc nhân 

quy tắc chung

**Gán, nhập, xuất, return** O(1)
**Tuần tự các lệnh** quy tắc cộng
**Cấu trúc if** max(dk1, dk2, dkn)

### trình tự đánh giá

1. nối tiếp: từ trên xuống
2. lồng nhau: từ trong ra 

