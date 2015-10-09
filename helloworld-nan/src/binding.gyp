{
  'targets': [
    {
      'target_name': 'hello',
      'sources': [
        './hello.cc'
      ],
      'dependencies': [
      ],
      'include_dirs': [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
