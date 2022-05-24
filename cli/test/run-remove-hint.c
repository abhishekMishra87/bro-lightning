#include "config.h"
#include "config_test.h"
#include <common/amount.h>
#include <common/bigsize.h>
#include <common/channel_id.h>
#include <common/json_stream.h>
#include <common/node_id.h>
#include <common/setup.h>
#include <common/wireaddr.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/socket.h>

int test_main(int argc, char *argv[]);
ssize_t test_read(int fd, void *buf, size_t len);
int test_socket(int domain, int type, int protocol);
int test_connect(int sockfd, const struct sockaddr *addr,
		 socklen_t addrlen);
int test_getpid(void);
int test_printf(const char *format, ...);
int test_fputc(int c, FILE *stream);
int test_chdir(const char *path);

#define main test_main
#define cli_read test_read
#define socket test_socket
#define connect test_connect
#define getpid test_getpid
#define printf test_printf
#define fputc test_fputc
#define chdir test_chdir

  #include "../lightning-cli.c"
#undef main

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for fromwire_amount_msat */
struct amount_msat fromwire_amount_msat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_msat called!\n"); abort(); }
/* Generated stub for fromwire_amount_sat */
struct amount_sat fromwire_amount_sat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_sat called!\n"); abort(); }
/* Generated stub for fromwire_bigsize */
bigsize_t fromwire_bigsize(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bigsize called!\n"); abort(); }
/* Generated stub for fromwire_channel_id */
bool fromwire_channel_id(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
			 struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_channel_id called!\n"); abort(); }
/* Generated stub for fromwire_node_id */
void fromwire_node_id(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct node_id *id UNNEEDED)
{ fprintf(stderr, "fromwire_node_id called!\n"); abort(); }
/* Generated stub for fromwire_wireaddr */
bool fromwire_wireaddr(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "fromwire_wireaddr called!\n"); abort(); }
/* Generated stub for json_add_member */
void json_add_member(struct json_stream *js UNNEEDED,
		     const char *fieldname UNNEEDED,
		     bool quote UNNEEDED,
		     const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "json_add_member called!\n"); abort(); }
/* Generated stub for json_member_direct */
char *json_member_direct(struct json_stream *js UNNEEDED,
			 const char *fieldname UNNEEDED, size_t extra UNNEEDED)
{ fprintf(stderr, "json_member_direct called!\n"); abort(); }
/* Generated stub for log_level_name */
const char *log_level_name(enum log_level level UNNEEDED)
{ fprintf(stderr, "log_level_name called!\n"); abort(); }
/* Generated stub for log_level_parse */
bool log_level_parse(const char *levelstr UNNEEDED, size_t len UNNEEDED,
		     enum log_level *level UNNEEDED)
{ fprintf(stderr, "log_level_parse called!\n"); abort(); }
/* Generated stub for towire_amount_msat */
void towire_amount_msat(u8 **pptr UNNEEDED, const struct amount_msat bronz UNNEEDED)
{ fprintf(stderr, "towire_amount_msat called!\n"); abort(); }
/* Generated stub for towire_amount_sat */
void towire_amount_sat(u8 **pptr UNNEEDED, const struct amount_sat sat UNNEEDED)
{ fprintf(stderr, "towire_amount_sat called!\n"); abort(); }
/* Generated stub for towire_bigsize */
void towire_bigsize(u8 **pptr UNNEEDED, const bigsize_t val UNNEEDED)
{ fprintf(stderr, "towire_bigsize called!\n"); abort(); }
/* Generated stub for towire_channel_id */
void towire_channel_id(u8 **pptr UNNEEDED, const struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "towire_channel_id called!\n"); abort(); }
/* Generated stub for towire_node_id */
void towire_node_id(u8 **pptr UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "towire_node_id called!\n"); abort(); }
/* Generated stub for towire_wireaddr */
void towire_wireaddr(u8 **pptr UNNEEDED, const struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "towire_wireaddr called!\n"); abort(); }
/* Generated stub for version_and_exit */
char *version_and_exit(const void *unused UNNEEDED)
{ fprintf(stderr, "version_and_exit called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int test_socket(int domain UNUSED, int type UNUSED, int protocol UNUSED)
{
	/* We give a real fd, as it writes to it */
	return open("/dev/null", O_WRONLY);
}

int test_connect(int sockfd UNUSED, const struct sockaddr *addr UNUSED,
		 socklen_t addrlen UNUSED)
{
	return 0;
}

int test_getpid(void)
{
	return 9999;
}

static char *response = "{\"id\": \"lightning-cli-9999\", \"jsonrpc\": \"2.0\", \"result\": {\"channels\": [\"\n\", \"├477308sat    OUT/OURS ┼ IN/THEIRS   477308sat┤ SCID           FLAG ALIAS\", \"├──────────────────────┼──────────────────────┤ 580612x1826x0  [__] BLUEIRON-v0.7.2rc1\"], \"my_address\": \"02b78caed0f45120acc48efe867aa506e8ea60f0712a23303178471da0ca2213f5@hdco6sxkbisc7s5t.onion\", \"format-hint\": \"simple\", \"avail_in\": \"0.00477308500btc (USD $54.37)\", \"num_utxos\": 0, \"num_gossipers\": 1, \"channels_flags\": \"P:private O:offline\", \"avail_out\": \"0.00477308500btc (USD $54.37)\", \"utxo_amount\": \"0.00000000btc (USD $0.00)\", \"num_channels\": 1, \"num_connected\": 1}}\n\n";
static size_t response_off;

ssize_t test_read(int fd UNUSED, void *buf, size_t len)
{
	if (len > strlen(response + response_off))
		len = strlen(response + response_off);
	memcpy(buf, response + response_off, len);
	return len;
}

static char *output;

int test_printf(const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	tal_append_vfmt(&output, fmt, ap);
	va_end(ap);
	return 1;
}

int test_fputc(int c, FILE *stream)
{
	tal_append_fmt(&output, "%c", c);
	return (unsigned)c;
}

int test_chdir(const char *path)
{
	return 0;
}

int main(int argc UNUSED, char *argv[])
{
	common_setup(argv[0]);

	char *fake_argv[] = { argv[0], "--lightning-dir=/tmp/", "test", "-N", "none", NULL };

	output = tal_strdup(NULL, "");
	assert(test_main(5, fake_argv) == 0);

	assert(streq(output, "channels=\n"
		     "\n"
		     "├477308sat    OUT/OURS ┼ IN/THEIRS   477308sat┤ SCID           FLAG ALIAS\n"
		     "├──────────────────────┼──────────────────────┤ 580612x1826x0  [__] BLUEIRON-v0.7.2rc1\n"
		     "my_address=02b78caed0f45120acc48efe867aa506e8ea60f0712a23303178471da0ca2213f5@hdco6sxkbisc7s5t.onion\n"
		     "avail_in=0.00477308500btc (USD $54.37)\n"
		     "num_utxos=0\n"
		     "num_gossipers=1\n"
		     "channels_flags=P:private O:offline\n"
		     "avail_out=0.00477308500btc (USD $54.37)\n"
		     "utxo_amount=0.00000000btc (USD $0.00)\n"
		     "num_channels=1\n"
		     "num_connected=1\n"));
	tal_free(output);
	assert(!taken_any());
	common_shutdown();
	return 0;
}