# COMPILER
có 4 bước chính trong suốt quá trình mà một file source code phải trải qua để biến thành file executable, đó là:
- Tiền xử lý (Pre-processing)
- Biên dịch (Compilation)
- Assembly
- Liên kết (Linking)
![image](https://github.com/HaiDangNguyen210/embeddedT6./assets/136185469/62d6a577-e4be-4ce6-a7cf-5afe2535c3c9)
## 1. Tiền xử lý (Pre-processing)
Đây là bước đầu tiên mà source code phải trải qua. Ở bước này, trình biên dịch phải làm những công việc:
- Thay thế các marco 
- Cắt bỏ comment code
- Mở rộng các file được include.
\
\
*Cú pháp để chuyển từ file .c sang file .i: gcc -E main.o -o main.i
## 2. Biên dịch (Compiling)
- Sau khi compiler hoàn thành tiền xử lý. Bước tiếp theo là lấy file main.i làm đầu vào và tiếp tục xử lý nó. Đầu ra tiếp theo của chúng ta sẽ là main.s. Đầu ra này là một file lệnh assembly.
- Mã nguồn assembly này sẽ là những lệnh mà assembler có thể hiểu và chuyển được chúng thành mã máy.
*Cú pháp để chuyển từ file .i sang file .s: gcc main.i -S -o main.s
## 3. Assembly
- Ở bước này, file main.s lại là đầu vào và file main.o là đầu ra. Bước này được xử lý bởi assembler. Assembler có thể hiểu và chuyển một file ‘.s’ với lệnh assembly thành file ‘.o’ chứa mã máy. Và chắc là trừ máy tính ra thì không có ai đọc được mã máy.
- Giai đoạn này sẽ tạo ra các file hệ thống ( âm thanh, đa phương tiện, icon).
## 4. Liên kết (Linking)
- Chuyển file(.o) thành file(.exe)(executable)
- Thực tế file (.exe) là 1 file zip gồm file source, file âm thanh, file hình ảnh, file thư viện nếu ứng dụng đó có.
- sắp xếp các file trên vào file(.exe)

# POINTER 
## 1. Định nghĩa 
- Con trỏ là một biến địa chỉ (biến này lưu địa chỉ ở vị trí con trỏ trỏ đến)
- **Khai báo con trỏ:** <kiểu dữ liệu> *<tên con trỏ> (ví dụ int *ptr)
- **trỏ con trỏ đến địa chỉ nào đó:** ptr = &a 
- **Đọc địa chỉ con trỏ trỏ đến:** ptr
- **Đọc địa chỉ con trỏ:** &ptr
![image](https://github.com/HaiDangNguyen210/embeddedT6./assets/136185469/0d7c405e-047c-47a8-b8d0-4eba411a910e)
- **Đọc giá trị tại địa chỉ con trỏ trỏ đến:** *ptr 
- Con trỏ cũng có một địa chỉ riêng ( địa chỉ rác ), có thể trùng với địa chỉ của 1 biến nào đó trong chương trình . Nên khi chưa dùng dến con trỏ nên khai con trỏ = NULL(địa chỉ = 0, giá trị =0), để ô địa chỉ của con trỏ sẽ là 0.   *cú pháp: int *ptr =NULL;
## 2. Các loaị con trỏ thường gặp 

- int *ptr; // **khai báo con trỏ để trỏ tới biến kiểu nguyên**
- float *ptr; // **khai báo con trỏ để trỏ tới biến kiểu thực**
- char *ptr; // **khai báo con trỏ để trỏ tới biến kiểu ký tự**

### 2.1 Con trỏ void (void *<tên con trỏ>)
- Con trỏ void còn được gọi là con trỏ tổng quát, là một kiểu con trỏ đặc biệt có thể trỏ đến các đối tượng của bất kỳ kiểu dữ liệu nào!
- Tuy nhiên, con trỏ void không xác định được kiểu dữ liệu của vùng nhớ mà nó trỏ tới. Vì vậy, con trỏ kiểu void cần phải được ép kiểu một cách rõ ràng sang con trỏ có kiểu dữ liệu khác (**ép kiểu** (<kiểu dữ liệu muốn ép>*)<tên con trỏ void> ) (lưu ý: muốn xuất ra giá trị của địa chỉ thì thêm dấu* trước ngoặc đơn))
### 2.2 Con trỏ hàm 
- **khai báo con trỏ hàm**: <kiểu dữ liệu>(*tên con trỏ)(<dữ liệu biến truyền vào hàm>) ( ví dụ: void(*ptr)(int int) )
- **ép kiểu con trỏ hàm** (ở đây là con trỏ void) ((void (*)(<kiểu dữ liệu biến truyền vào hàm>))<tên con trỏ void>)  ( ví dụ: ((void( * )(int int)ptr)) )
## 3. pointer to pointer 
## 4. Khi nào sử dụng pointer
- khi cần thay đổi giá trị của biến truyền vào hàm (ở đây là int a, int b) thì ta sử dụng con trỏ.
\
\
![image](https://github.com/HaiDangNguyen210/embeddedT6./assets/136185469/70405a7e-da9f-4080-9b7b-cfccf638b4ed)
*giải thích:* khi chạy hết hàm void, địa chỉ của con trỏ sẽ được giải phóng, tuy nhiên giá trị của con trỏ lúc này mang giá trị của địa chỉ mà nó trỏ đến (là biến x và y). 

# Phân Vùng Nhớ
![image](https://github.com/HaiDangNguyen210/embeddedT6./assets/136185469/6975dab5-7cdd-450c-b3f2-63ab1cb68dd2)
## Text :
- Quyền truy cập chỉ Read và nó chưa lệnh để thực thi nên tránh sửa đổi instruction.
- Chứa khai báo hằng số trong chương trình (.rodata)
Const int = 5; (hằng số)
## Data:
- Quyền truy cập là read-write.
- Chứa biến toàn cục or biến static với giá trị khởi tạo khác không.
- Được giải phóng khi kết thúc chương trình.
## Bss:
- Quyền truy cập là read-write.
- Chứa biến toàn cục or biến static với giá trị khởi tạo bằng không or không khởi tạo.
- Được giải phóng khi kết thúc chương trình.
## Stack:
- Quyền truy cập là read-write.
- Được sử dụng cấp phát cho biến local, input parameter của hàm,…
- Sẽ được giải phóng khi ra khỏi block code/hàm
## Heap:
- Quyền truy cập là read-write.
- Được sử dụng để cấp phát bộ nhớ động như: Malloc, Calloc, …
- Sẽ được giải phóng khi gọi hàm free,…
# Các biến nâng cao 
## Biến Static 
- Biến tĩnh (static variables) là biến được tạo ra duy nhất một lần khi gọi hàm lần đầu tiên và nó sẽ tiếp tục tồn tại trong suốt vòng đời của chương trình. Đây là sự khác biệt giữa biến tĩnh và biến cục bộ.




 

