
/*

typedef unsigned char ( * uart_read_a_char)(unsigned char *, unsigned char);
typedef unsigned char ( * uart_write_a_char)(unsigned char *, unsigned char);

typedef struct
{
  uart_read_a_char your_read_a_char_function_name;
  uart_write_a_char your_write_a_char_function_name;
}uart_debug_t;

uart_debug_t new_uart_debug_type_object;
new_uart_debug_type_object.your_read_a_char_function_name = read_char_from_uart;
new_uart_debug_type_object.your_write_a_char_function_name = write_char_from_uart;


typedef struct
{
  IO_t        IO;
  uart_debug_t        uart_debug;
  uint8_t             is_initialized;
  uint8_t             acc_is_enabled;
  uint8_t             gyro_is_enabled;
  odr_xl_t    acc_odr;
  odr_g_t     gyro_odr;
} Object_t;

object_t new_object;
new_object->uart_debug.uart_read_a_char = your_read_a_char_function_name;
new_object->uart_debug.uart_write_a_char = your_write_a_char_function_name;

*/
// beware space and equal sign 
// if space greating new object
// if equal assign to object member new fuction


void commander(unsigned char * command_pointer,max_command_size)
{

}
