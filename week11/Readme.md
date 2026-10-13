# Week 11 – Operating System Detection Using Nmap

## Description

Operating System Detection using N map.

## Aim

To learn how to use Nmap to identify the operating system of a target computer.

## Requirements

* Windows or Linux operating system
* Nmap software
* Command Prompt, PowerShell, or Terminal
* A computer or network device that you own or have permission to scan

## Introduction

Nmap (Network Mapper) is an open-source network discovery and security auditing tool. It can attempt to identify the operating system of a target host by analyzing network responses.

## Download and Installation

### Windows

1. Visit the official Nmap download page: https://nmap.org/download.html
2. Download the Windows installer.
3. Run the installer and complete the installation.
4. Open Command Prompt.
5. Verify the installation:

```bash
nmap --version
```

### Linux (Ubuntu/Debian)

Open Terminal and execute:

```bash
sudo apt update
sudo apt install nmap
```

Verify the installation:

```bash
nmap --version
```

## How to Execute Nmap

1. Install Nmap.
2. Open Command Prompt or Terminal.
3. Run the required operating system detection command.
4. Observe the output.
5. Record the results for the lab experiment.

## Experiment 1: Detect the Operating System of a Target

### Command

```bash
nmap -O 192.168.1.10
```

### Explanation

The `-O` option instructs Nmap to attempt operating system detection on the specified target.

Replace `192.168.1.10` with an authorized target IP address. OS detection may require administrator or root privileges.

### Expected Output

Nmap attempts to identify the operating system and displays its best estimate when sufficient information is available.

## Experiment 2: Scan Localhost

### Command

```bash
nmap -O 127.0.0.1
```

### Explanation

This command attempts OS detection on the local computer. Results may be limited because scanning localhost does not always provide the network responses needed for reliable OS detection.

### Expected Output

Nmap displays scan information and may report an OS guess or indicate that detection was inconclusive.

## Experiment 3: Detect the Operating System with Increased Verbosity

### Command

```bash
nmap -O -v 192.168.1.10
```

### Explanation

The `-O` option attempts OS detection, while `-v` displays more information about the scanning process.

### Expected Output

Nmap displays additional scan details and any OS-detection information it can determine.

## Experiment 4: Detect the Operating System with Service Information

### Command

```bash
nmap -O -sV 192.168.1.10
```

### Explanation

The `-O` option attempts operating system detection, while `-sV` attempts to identify services and their versions on discovered ports.

### Expected Output

Nmap may report an OS estimate, discovered ports, and service information.

## Experiment 5: Detect the Operating System with Administrator Privileges

### Windows Command Prompt

Open Command Prompt as Administrator and run:

```bash
nmap -O 192.168.1.10
```

### Linux Terminal

```bash
sudo nmap -O 192.168.1.10
```

### Explanation

OS detection often works better with the required privileges because Nmap uses network techniques that may need elevated access.

### Expected Output

Nmap attempts OS detection and displays its best estimate if the available responses are sufficient.

## Sample Output

The following is an illustrative example, not the result of an actual scan.

```text
Starting Nmap
Nmap scan report for 192.168.1.10
Host is up.

Device type: general purpose
Running: Microsoft Windows
OS details: Example OS estimate

Nmap done
```

Actual output depends on the target, privileges, firewall, and network conditions. The example OS information is not a guaranteed result.

## Procedure

1. Download and install Nmap from the official website.
2. Open Command Prompt, PowerShell, or Terminal.
3. Verify the installation using `nmap --version`.
4. Select a device you own or have permission to test.
5. Execute an OS detection command using `nmap -O`.
6. Review the output for the operating system estimate.
7. Record the command and actual output in your lab record.

## Result

Nmap was used to attempt operating system detection on an authorized target host.

## Applications

* Network administration
* Operating system identification
* Network inventory
* Security auditing
* Troubleshooting network devices

## Precautions

1. Scan only systems you own or have explicit permission to test.
2. Do not scan public, college, or company networks without authorization.
3. OS detection may be inconclusive or inaccurate.
4. Use scan results responsibly.

## Reference

Computer Networks Lab Manual – R22-CMRTC, Experiment 11: “Operating System Detection using N map.”

Official Nmap Website: https://nmap.org/

Official Download Page: https://nmap.org/download.html
