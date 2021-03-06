#include "SampleSaxHandler.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace xercesc;

const char* DESCRIPTION = "description";
const char* DEFINITION = "Definition";

// when start tag.
void SampleSaxHandler::startElement(const XMLCh* const uri, const XMLCh* const localname,
                                    const XMLCh* const qname, const Attributes& attrs)
{
    char* name = XMLString::transcode(localname);

    // if (*name == *DESCRIPTION)
    // {
    //     cout << "start : " << name << endl;
    // } else if (*name == *DEFINITION) {
    //     cout << "start : " << name << endl;
    // }

    XMLString::release(&name);
}

// when end tag.
void SampleSaxHandler::endElement(const XMLCh* const uri, const XMLCh* const localname,
                                  const XMLCh* const qname)
{
    char* name = XMLString::transcode(localname);

    // if (*name == *DESCRIPTION)
    // {
    //     cout << "end : " << name << endl;
    // }

    XMLString::release(&name);
}

// when hit string that between tag.
void SampleSaxHandler::characters(const XMLCh* const chars, const XMLSize_t length)
{
    XMLCh* buffer = new XMLCh[XMLString::stringLen(chars)+1];
    XMLString::copyString(buffer, chars);
    XMLString::trim(buffer);
    char* text = XMLString::transcode(buffer);
    delete[] buffer;

    // if (*text)
    // {
    //     cout << "text : " << text << endl;
    // }

    XMLString::release(&text);
}
