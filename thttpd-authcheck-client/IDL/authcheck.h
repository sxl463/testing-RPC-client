/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _AUTHCHECK_H_RPCGEN
#define _AUTHCHECK_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define BUFFER_SIZE 200

struct shttpd_conn {
	int global_passwd;
	int vhost;
	int maxremoteuser;
	int method;
	int should_linger;
	int status;
	int mime_flag;
	int max_age;
	int got_range;
	int maxresponse;
	int responselen;
	long first_byte_index;
	long last_byte_index;
	long bytes_to_send;
	long range_if;
	char dirname[BUFFER_SIZE];
	char authorization[BUFFER_SIZE];
	char hostdir[BUFFER_SIZE];
	char remoteuser[BUFFER_SIZE];
	char encodedurl[BUFFER_SIZE];
	char useragent[BUFFER_SIZE];
	char charset[BUFFER_SIZE];
	char protocol[BUFFER_SIZE];
	char p3p[BUFFER_SIZE];
	char response[BUFFER_SIZE];
};
typedef struct shttpd_conn shttpd_conn;


#define AUTHPROG 0x23451124
#define AUTHVERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define my_auth_check2 1
extern  int * my_auth_check2_1(shttpd_conn *, CLIENT *);
extern  int * my_auth_check2_1_svc(shttpd_conn *, struct svc_req *);
#define read_alloc_count 2
extern  int * read_alloc_count_1(void *, CLIENT *);
extern  int * read_alloc_count_1_svc(void *, struct svc_req *);
#define write_alloc_count 3
extern  int * write_alloc_count_1(int *, CLIENT *);
extern  int * write_alloc_count_1_svc(int *, struct svc_req *);
#define read_alloc_size 4
extern  int * read_alloc_size_1(void *, CLIENT *);
extern  int * read_alloc_size_1_svc(void *, struct svc_req *);
#define write_alloc_size 5
extern  int * write_alloc_size_1(int *, CLIENT *);
extern  int * write_alloc_size_1_svc(int *, struct svc_req *);
extern int authprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define my_auth_check2 1
extern  int * my_auth_check2_1();
extern  int * my_auth_check2_1_svc();
#define read_alloc_count 2
extern  int * read_alloc_count_1();
extern  int * read_alloc_count_1_svc();
#define write_alloc_count 3
extern  int * write_alloc_count_1();
extern  int * write_alloc_count_1_svc();
#define read_alloc_size 4
extern  int * read_alloc_size_1();
extern  int * read_alloc_size_1_svc();
#define write_alloc_size 5
extern  int * write_alloc_size_1();
extern  int * write_alloc_size_1_svc();
extern int authprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_shttpd_conn (XDR *, shttpd_conn*);
extern  bool_t xdr_shttpd_conn (XDR *, shttpd_conn*);

#else /* K&R C */
extern bool_t xdr_shttpd_conn ();
extern bool_t xdr_shttpd_conn ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_AUTHCHECK_H_RPCGEN */
