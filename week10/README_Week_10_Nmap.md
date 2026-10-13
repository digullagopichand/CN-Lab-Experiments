# Week 10 – How to Run Nmap Scan

## Description

How to run N map scan.

## Aim

To install and execute Nmap for scanning a target host, identifying open ports, and examining network services.

## Requirements

* Operating System: Windows or Linux
* Nmap software
* Command Prompt, PowerShell, or Terminal
* Internet connection for downloading Nmap

## Introduction

Nmap (Network Mapper) is an open-source network discovery and security auditing tool. It is used to identify active hosts, examine port states, and detect services running on network devices.

## Download and Installation

### Windows Installation

1. Open the official Nmap download page: https://nmap.org/download.html
2. Download the Windows installer.
3. Open the downloaded installer.
4. Follow the installation wizard and complete the installation.
5. Open Command Prompt.
6. Verify the installation using:

```bash
nmap --version
```

### Linux Installation

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

1. Install Nmap on your computer.
2. Open Command Prompt, PowerShell, or Terminal.
3. Enter the required Nmap command.
4. Press Enter.
5. Observe the output and record the results.
6. Use only your own device or an authorized target.

## Experiment 1: Scan Localhost

### Command

```bash
nmap 127.0.0.1
```

### Explanation

The IP address `127.0.0.1` refers to the local computer. This command scans the local system for common TCP ports.

### Expected Output

Nmap displays the host status and the ports it can identify.

## Experiment 2: Scan a Specific Host

### Command

```bash
nmap 192.168.1.10
```

### Explanation

This command scans the specified IP address to check host availability and discover ports.

Replace `192.168.1.10` with the IP address of a device you are authorized to scan.

### Expected Output

Nmap reports the host status and discovered port states, where available.

## Experiment 3: Scan the Ten Most Common Ports

### Command

```bash
nmap --top-ports 10 192.168.1.10
```

### Explanation

This command scans the ten most common ports on the specified target.

### Expected Output

The output lists the selected ports and their detected states, such as open, closed, or filtered.

## Experiment 4: Scan a Specific Port

### Command

```bash
nmap -p 80 192.168.1.10
```

### Explanation

The `-p 80` option instructs Nmap to scan TCP port 80, commonly associated with HTTP.

### Expected Output

Nmap displays the detected state of port 80.

## Experiment 5: Detect Service Versions

### Command

```bash
nmap -sV 192.168.1.10
```

### Explanation

The `-sV` option attempts to identify services and their version information on discovered ports.

### Expected Output

Nmap displays discovered ports and service identification details when available.

## Sample Output

The following output is illustrative only. Your actual output may differ.

```text
Starting Nmap
Nmap scan report for localhost
Host is up.

PORT    STATE   SERVICE
80/tcp  closed  http
443/tcp closed  https

Nmap done
```

### Output Explanation

* **Host is up:** The target responded to Nmap's host discovery or scan.
* **PORT:** Shows the port number and protocol.
* **STATE:** Indicates the detected state of the port.
* **SERVICE:** Shows the service commonly associated with the port.

## Result

Nmap was used to perform basic network scans, examine port states, and attempt service identification on an authorized target.

## Applications

* Network discovery
* Port scanning
* Service identification
* Network troubleshooting
* Authorized security auditing

## Precautions

1. Scan only devices you own or have explicit permission to test.
2. Do not scan public, college, or company networks without authorization.
3. Actual results depend on the target, firewall, and network configuration.
4. Use scan results responsibly.

## Reference

Computer Networks Lab Manual – R22-CMRTC, Experiment 10: “How to run N map scan.”

Official Nmap Website: https://nmap.org/

Official Download Page: https://nmap.org/download.html
