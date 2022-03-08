{
  'targets': [
    {
      # Specify the module name here, exactly the same
      # of binary section in package.json.
      'target_name': '<module-name>',
      'cflags_cc!': [ '-fno-exceptions' ],
      'cflags!': [
        '-fno-exceptions'
      ],
      # Add more paths to specify
      # where your source code files are.
      'sources': [
        'src/native/exports.cpp',
        'src/native/module.cpp'
      ],
      # Add more paths to specify
      # where your header files are.
      'include_dirs': [
        '<!@(node -p "require(\'node-addon-api\').include")',
        '<!@(node -p "require(\'node-addon-api\').include_dir")'
      ],
      # Add your define directives like #define __WIN32
      # or something else here.
      'defines': ['NAPI_DISABLE_CPP_EXCEPTIONS']
    }
  ]
}