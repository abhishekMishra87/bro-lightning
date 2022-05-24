#include "config.h"
#include "test_gen.h"
#include "print_gen.h"

#include <assert.h>
#include <stdio.h>


/* AUTOGENERATED MOCKS START */
/* Generated stub for fromwire_peektype */
int fromwire_peektype(const u8 *cursor UNNEEDED)
{ fprintf(stderr, "fromwire_peektype called!\n"); abort(); }
/* Generated stub for printwire_amount_msat */
bool printwire_amount_msat(const char *fieldname UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED)
{ fprintf(stderr, "printwire_amount_msat called!\n"); abort(); }
/* Generated stub for printwire_tlvs */
bool printwire_tlvs(const char *tlv_name UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED,
		    const struct tlv_print_record_type types[] UNNEEDED, size_t num_types UNNEEDED)
{ fprintf(stderr, "printwire_tlvs called!\n"); abort(); }
/* Generated stub for printwire_tu32 */
bool printwire_tu32(const char *fieldname UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED)
{ fprintf(stderr, "printwire_tu32 called!\n"); abort(); }
/* Generated stub for printwire_tu64 */
bool printwire_tu64(const char *fieldname UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED)
{ fprintf(stderr, "printwire_tu64 called!\n"); abort(); }
/* Generated stub for printwire_u16 */
bool printwire_u16(const char *fieldname UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED)
{ fprintf(stderr, "printwire_u16 called!\n"); abort(); }
/* Generated stub for printwire_u32 */
bool printwire_u32(const char *fieldname UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED)
{ fprintf(stderr, "printwire_u32 called!\n"); abort(); }
/* Generated stub for printwire_u64 */
bool printwire_u64(const char *fieldname UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED)
{ fprintf(stderr, "printwire_u64 called!\n"); abort(); }
/* Generated stub for printwire_u8_array */
bool printwire_u8_array(const char *fieldname UNNEEDED, const u8 **cursor UNNEEDED, size_t *plen UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "printwire_u8_array called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int main(void)
{
	setup_locale();
	void *ctx = tal(NULL, char);

	struct tlv_test_n1 *n1 = tlv_test_n1_new(ctx);
	struct tlv_test_n2 *n2 = tlv_test_n2_new(ctx);
	struct tlv_test_n3 *n3 = tlv_test_n3_new(ctx);

	assert(n1);
	assert(n2);
	assert(n3);

	tal_free(ctx);
}