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
## Định nghĩa 
- Con trỏ là một biến địa chỉ (biến này lưu địa chỉ ở vị trí con trỏ trỏ đến)
- **Khai báo con trỏ:** <kiểu dữ liệu> *<tên con trỏ> (ví dụ int *ptr)
- **trỏ con trỏ đến địa chỉ nào đó:** ptr = &a 
- **Đọc địa chỉ con trỏ trỏ đến:** ptr
- **Đọc địa chỉ con trỏ:** &ptr
![image](https://github.com/HaiDangNguyen210/embeddedT6./assets/136185469/0d7c405e-047c-47a8-b8d0-4eba411a910e)
- **Đọc giá trị tại địa chỉ con trỏ trỏ đến:** *ptr 
- Con trỏ cũng có một địa chỉ riêng ( địa chỉ rác ), có thể trùng với địa chỉ của 1 biến nào đó trong chương trình . Nên khi chưa dùng dến con trỏ nên khai con trỏ = NULL(địa chỉ = 0, giá trị =0), để ô địa chỉ của con trỏ sẽ là 0.   *cú pháp: int *ptr =NULL;
## Các loaị con trỏ thường gặp 

- int *ptr; // **khai báo con trỏ để trỏ tới biến kiểu nguyên**
- float *ptr; // **khai báo con trỏ để trỏ tới biến kiểu thực**
- char *ptr; // **khai báo con trỏ để trỏ tới biến kiểu ký tự**

### Con trỏ void (void *<tên con trỏ>)
- Con trỏ void còn được gọi là con trỏ tổng quát, là một kiểu con trỏ đặc biệt có thể trỏ đến các đối tượng của bất kỳ kiểu dữ liệu nào!
- Tuy nhiên, con trỏ void không xác định được kiểu dữ liệu của vùng nhớ mà nó trỏ tới. Vì vậy, con trỏ kiểu void cần phải được ép kiểu một cách rõ ràng sang con trỏ có kiểu dữ liệu khác (**ép kiểu** (<kiểu dữ liệu muốn ép>*)<tên con trỏ void> ) (lưu ý: muốn xuất ra giá trị của địa chỉ thì thêm dấu* trước ngoặc đơn))
### Con trỏ hàm 
- **khai báo con trỏ hàm**: <kiểu dữ liệu>(*tên con trỏ)(<dữ liệu biến truyền vào hàm>) ( ví dụ: void(*ptr)(int int) )
- **ép kiểu con trỏ hàm** (ở đây là con trỏ void) ((void (*)(<kiểu dữ liệu biến truyền vào hàm>))<tên con trỏ void>)  ( ví dụ: ((void( * )(int int)ptr)) )



