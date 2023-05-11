#!/usr/bin/expect

spawn git push
expect "Username for 'https://github.com/Faehn/Piscine-In-Belgium.git':"
send "Faehn\r"
expect "Password for 'https://Faehn@github.com/Faehn/Piscine-In-Belgium.git':"
send "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\r"
expect eof
