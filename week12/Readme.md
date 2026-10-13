# Week 12 – Network Configuration Commands and Troubleshooting Utilities

## Description

Study of basic Network configuration commands and utilities to debug the network issues.

## Aim

To study and execute basic network configuration commands and troubleshooting utilities used to identify and resolve network connectivity problems.

## Requirements

* Windows or Linux operating system
* Command Prompt, PowerShell, or Terminal
* Network connection
* Basic knowledge of IP addresses and networking

## Introduction

Network configuration commands help users examine network settings, test connectivity, identify routing problems, and troubleshoot DNS resolution issues.

Common networking utilities include `ipconfig`, `ping`, `tracert`, `nslookup`, and `netstat` on Windows.

## Network Commands and Examples

### 1. Display IP Configuration

**Windows command:**

```bash
ipconfig
```

**Detailed configuration:**

```bash
ipconfig /all
```

**Description:** Displays network adapter information, IP addresses, subnet masks, default gateways, and DNS settings.

**Expected Output:** Shows the computer's current network configuration.

### 2. Test Network Connectivity

**Command:**

```bash
ping google.com
```

**Description:** Sends ICMP echo requests to check whether the destination responds and measures response time.

**Expected Output:** Displays replies, response times, and packet-loss statistics when available.

### 3. Trace the Network Route

**Windows command:**

```bash
tracert google.com
```

**Linux command:**

```bash
traceroute google.com
```

**Description:** Shows the network hops between your computer and the destination.

**Expected Output:** Displays intermediate routers where responses are available. Some hops may time out because of network filtering.

### 4. Check DNS Resolution

**Command:**

```bash
nslookup google.com
```

**Description:** Queries DNS to find the IP address associated with a domain name.

**Expected Output:** Displays the DNS server used and the resolved address when the lookup succeeds.

### 5. Display Active Network Connections

**Windows command:**

```bash
netstat -an
```

**Description:** Displays network connections and listening ports using numerical addresses.

**Expected Output:** Lists connection states, local addresses, foreign addresses, and listening endpoints.

### 6. Display the Routing Table

**Windows command:**

```bash
route print
```

**Linux command:**

```bash
ip route
```

**Description:** Displays the system's routing table, including routes used to forward network traffic.

**Expected Output:** Shows available routes and, where configured, the default gateway.

### 7. Display Network Adapter Information

**Windows command:**

```bash
getmac
```

**Description:** Displays the MAC addresses associated with network adapters.

**Expected Output:** Lists available adapter MAC addresses.

### 8. Clear the DNS Cache

**Windows command:**

```bash
ipconfig /flushdns
```

**Description:** Clears the local DNS resolver cache.

**Expected Output:** Windows reports whether the DNS cache was successfully flushed.

## Procedure

1. Open Command Prompt or PowerShell on Windows, or Terminal on Linux.
2. Execute `ipconfig` to inspect the IP configuration.
3. Use `ping google.com` to test connectivity.
4. Run `tracert google.com` to examine the route.
5. Execute `nslookup google.com` to check DNS resolution.
6. Run `netstat -an` to inspect network connections.
7. Use `route print` to examine the routing table.
8. Record the commands and actual outputs in the lab record.

## Troubleshooting Examples

| Problem                | Command               | Purpose                                 |
| ---------------------- | --------------------- | --------------------------------------- |
| IP configuration issue | `ipconfig /all`       | Inspect adapter settings                |
| Connectivity issue     | `ping google.com`     | Test destination reachability           |
| DNS issue              | `nslookup google.com` | Check name resolution                   |
| Routing issue          | `route print`         | Inspect routing entries                 |
| Connection issue       | `netstat -an`         | Inspect connections and listening ports |

## Sample Output

Illustrative example for `ipconfig`:

```text
Windows IP Configuration

Ethernet adapter:

   IPv4 Address. . . . . : 192.168.1.10
   Subnet Mask . . . . . : 255.255.255.0
   Default Gateway . . . : 192.168.1.1
```

These addresses are examples only. Your actual output depends on your network configuration.

## Result

Basic network configuration commands and troubleshooting utilities were studied and executed to examine network settings, test connectivity, inspect routing, and diagnose DNS-related issues.

## Applications

* Network configuration
* Connectivity testing
* DNS troubleshooting
* Route analysis
* Monitoring network connections
* Basic network diagnostics

## Precautions

1. Run commands carefully and review the output before changing network settings.
2. Use administrator privileges only when required.
3. Do not share sensitive network configuration information publicly.
4. Some commands may produce incomplete results when firewalls or network policies block responses.

## Reference

Computer Networks Lab Manual – R22-CMRTC, Experiment 12: “Study of basic Network configuration commands and utilities to debug the network issues.”
