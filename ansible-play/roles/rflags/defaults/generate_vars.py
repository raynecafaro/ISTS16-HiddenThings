l_hosts = ["vega", "crucis", "persei", "luna", "pegasi"]
w_hosts = ["sirius", "tauri", "sol", "wolf"]

with open("file.txt") as hashf:
    hashes = hashf.readlines()
    hashes = [ h.strip() for h in hashes ]
    
with open("main.yml.txt", "w") as f:
    f.write("rflags_vms:\n")
    for i in range(1,12):
        for host in l_hosts:
            hostname = "{}.team{}.ists".format(host, i)
            f.write("  {}:\n".format(hostname))
            f.write("    key: \"{}\"\n".format(hashes.pop()))
            f.write("    file: \"{}\"\n".format("/usr/share/int0"))
        for host in w_hosts:
            hostname = "{}.team{}.ists".format(host, i)
            f.write("  {}:\n".format(hostname))
            f.write("    key: \"{}\"\n".format(hashes.pop()))
            f.write("    file: \"{}\"\n".format("C:\\\\Windows\\\\appcompat\\\\AppComData.dat"))


