/* soapClient.c
   Generated by gSOAP 2.8.3 from onvif.h

Copyright(C) 2000-2011, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"
#ifdef __cplusplus
extern "C" {
#endif

SOAP_SOURCE_STAMP("@(#) soapClient.c ver 2.8.3 2012-11-07 08:18:04 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_send_SOAP_ENV__Fault(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *faultcode, char *faultstring, char *faultactor, struct SOAP_ENV__Detail *detail, struct SOAP_ENV__Code *SOAP_ENV__Code, struct SOAP_ENV__Reason *SOAP_ENV__Reason, char *SOAP_ENV__Node, char *SOAP_ENV__Role, struct SOAP_ENV__Detail *SOAP_ENV__Detail)
{	struct SOAP_ENV__Fault soap_tmp_SOAP_ENV__Fault;
	soap->encodingStyle = NULL;
	soap_tmp_SOAP_ENV__Fault.faultcode = faultcode;
	soap_tmp_SOAP_ENV__Fault.faultstring = faultstring;
	soap_tmp_SOAP_ENV__Fault.faultactor = faultactor;
	soap_tmp_SOAP_ENV__Fault.detail = detail;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Code = SOAP_ENV__Code;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Reason = SOAP_ENV__Reason;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Node = SOAP_ENV__Node;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Role = SOAP_ENV__Role;
	soap_tmp_SOAP_ENV__Fault.SOAP_ENV__Detail = SOAP_ENV__Detail;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault, "SOAP-ENV:Fault", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_SOAP_ENV__Fault(soap, &soap_tmp_SOAP_ENV__Fault, "SOAP-ENV:Fault", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_SOAP_ENV__Fault(struct soap *soap, struct SOAP_ENV__Fault *_param_1)
{
	soap_default_SOAP_ENV__Fault(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_SOAP_ENV__Fault(soap, _param_1, "SOAP-ENV:Fault", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_NO_METHOD;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___dndl__Probe(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct d__ProbeType *d__Probe, struct d__ProbeMatchesType *d__ProbeMatches)
{	struct __dndl__Probe soap_tmp___dndl__Probe;
	if (!soap_action)
		soap_action = "http://www.onvif.org/ver10/network/wsdl/Probe";
	soap->encodingStyle = NULL;
	soap_tmp___dndl__Probe.d__Probe = d__Probe;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___dndl__Probe(soap, &soap_tmp___dndl__Probe);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___dndl__Probe(soap, &soap_tmp___dndl__Probe, "-dndl:Probe", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___dndl__Probe(soap, &soap_tmp___dndl__Probe, "-dndl:Probe", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!d__ProbeMatches)
		return soap_closesock(soap);
	soap_default_d__ProbeMatchesType(soap, d__ProbeMatches);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_d__ProbeMatchesType(soap, d__ProbeMatches, "d:ProbeMatches", "d:ProbeMatchesType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___dnrd__Hello(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct d__HelloType *d__Hello, struct d__ResolveType *dn__HelloResponse)
{	struct __dnrd__Hello soap_tmp___dnrd__Hello;
	if (!soap_action)
		soap_action = "http://www.onvif.org/ver10/network/wsdl/Hello";
	soap->encodingStyle = NULL;
	soap_tmp___dnrd__Hello.d__Hello = d__Hello;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___dnrd__Hello(soap, &soap_tmp___dnrd__Hello);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___dnrd__Hello(soap, &soap_tmp___dnrd__Hello, "-dnrd:Hello", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___dnrd__Hello(soap, &soap_tmp___dnrd__Hello, "-dnrd:Hello", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!dn__HelloResponse)
		return soap_closesock(soap);
	soap_default_d__ResolveType(soap, dn__HelloResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_d__ResolveType(soap, dn__HelloResponse, "dn:HelloResponse", "d:ResolveType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___dnrd__Bye(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct d__ByeType *d__Bye, struct d__ResolveType *dn__ByeResponse)
{	struct __dnrd__Bye soap_tmp___dnrd__Bye;
	if (!soap_action)
		soap_action = "http://www.onvif.org/ver10/network/wsdl/Bye";
	soap->encodingStyle = NULL;
	soap_tmp___dnrd__Bye.d__Bye = d__Bye;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___dnrd__Bye(soap, &soap_tmp___dnrd__Bye);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___dnrd__Bye(soap, &soap_tmp___dnrd__Bye, "-dnrd:Bye", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___dnrd__Bye(soap, &soap_tmp___dnrd__Bye, "-dnrd:Bye", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!dn__ByeResponse)
		return soap_closesock(soap);
	soap_default_d__ResolveType(soap, dn__ByeResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_d__ResolveType(soap, dn__ByeResponse, "dn:ByeResponse", "d:ResolveType");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#ifdef __cplusplus
}
#endif

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.c */
