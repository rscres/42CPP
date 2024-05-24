import sys

class_name = sys.argv[1]

hpp_template = """
#ifndef {0}_HPP
#define {0}_HPP

class {1} {{
public:
    {1}();
    {1}(const {1}& other);
    {1}& operator=(const {1}& other);
    ~{1}();
}};

#endif // {0}_HPP
""".format(class_name.upper(), class_name)

cpp_template = """
#include "{0}.hpp"

{0}::{0}() {{
    // Initialization code here
}}

{0}::{0}(const {0}& other) {{
    // Copy data from 'other' to this object
}}

{0}& {0}::operator=(const {0}& other) {{
    if (this != &other) {{
        // Free existing resources (if any)

        // Copy data from 'other' to this object
    }}
    return *this;
}}

{0}::~{0}() {{
    // Cleanup code here
}}
""".format(class_name)

with open("{0}.hpp".format(class_name), "w") as hpp_file:
    hpp_file.write(hpp_template)

with open("{0}.cpp".format(class_name), "w") as cpp_file:
    cpp_file.write(cpp_template)