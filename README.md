# Build Instructions

To set up Conan for the repository create a repository local virtual environment for Python and [activate the environment (note this step differs for different shells)](https://docs.python.org/3/library/venv.html#how-venvs-work)

```bash
cd <project root>
python3 -m venv .venv               # Create a Python virtual env
source ./.venv/bin/activate         # Activate the virtual env for bash by source.
pip install conan                   # Install conan
conan profile detect --force        # Generate a default configuration with the local machine settings
sed -i.backup '/^\[settings\]$/,/^\[/ s/^compiler.libcxx=.*/compiler.libcxx=libstdc++11/' .conan2/profiles/default # Ensure Gcc uses libstdc++11
sed -i.backup '/^\[settings\]$/,/^\[/ s/^compiler.cppstd=.*/compiler.cppstd=17/' .conan2/profiles/default # Ensure C++17 language
conan install -of ./build/ conanfile.txt --build=missing # Install supported build profiles from ./.conan to ./conan2
```