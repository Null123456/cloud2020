<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (1.8.0_242) on Wed Jan 06 20:49:13 CET 2021 -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>GetConfigCommand (Apache ZooKeeper - Server 3.5.9 API)</title>
<meta name="date" content="2021-01-06">
<link rel="stylesheet" type="text/css" href="../../../../stylesheet.css" title="Style">
<script type="text/javascript" src="../../../../script.js"></script>
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="GetConfigCommand (Apache ZooKeeper - Server 3.5.9 API)";
        }
    }
    catch(err) {
    }
//-->
var methods = {"i0":10,"i1":10};
var tabs = {65535:["t0","All Methods"],2:["t2","Instance Methods"],8:["t4","Concrete Methods"]};
var altColor = "altColor";
var rowColor = "rowColor";
var tableTab = "tableTab";
var activeTableTab = "activeTableTab";
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar.top">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.top" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.top.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/GetConfigCommand.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/cli/GetCommand.html" title="class in org.apache.zookeeper.cli"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/cli/ListQuotaCommand.html" title="class in org.apache.zookeeper.cli"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/cli/GetConfigCommand.html" target="_top">Frames</a></li>
<li><a href="GetConfigCommand.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li><a href="#fields.inherited.from.class.org.apache.zookeeper.cli.CliCommand">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.detail">Method</a></li>
</ul>
</div>
<a name="skip.navbar.top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<!-- ======== START OF CLASS DATA ======== -->
<div class="header">
<div class="subTitle">org.apache.zookeeper.cli</div>
<h2 title="Class GetConfigCommand" class="title">Class GetConfigCommand</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li><a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">org.apache.zookeeper.cli.CliCommand</a></li>
<li>
<ul class="inheritance">
<li>org.apache.zookeeper.cli.GetConfigCommand</li>
</ul>
</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<hr>
<br>
<pre>public class <span class="typeNameLabel">GetConfigCommand</span>
extends <a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">CliCommand</a></pre>
<div class="block">get command for cli</div>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- =========== FIELD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="field.summary">
<!--   -->
</a>
<h3>Field Summary</h3>
<ul class="blockList">
<li class="blockList"><a name="fields.inherited.from.class.org.apache.zookeeper.cli.CliCommand">
<!--   -->
</a>
<h3>Fields inherited from class&nbsp;org.apache.zookeeper.cli.<a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">CliCommand</a></h3>
<code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html#err">err</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#out">out</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#zk">zk</a></code></li>
</ul>
</li>
</ul>
<!-- ======== CONSTRUCTOR SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.summary">
<!--   -->
</a>
<h3>Constructor Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Constructor Summary table, listing constructors, and an explanation">
<caption><span>Constructors</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tr class="altColor">
<td class="colOne"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/cli/GetConfigCommand.html#GetConfigCommand--">GetConfigCommand</a></span>()</code>&nbsp;</td>
</tr>
</table>
</li>
</ul>
<!-- ========== METHOD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="method.summary">
<!--   -->
</a>
<h3>Method Summary</h3>
<table class="memberSummary" border="0" cellpadding="3" cellspacing="0" summary="Method Summary table, listing methods, and an explanation">
<caption><span id="t0" class="activeTableTab"><span>All Methods</span><span class="tabEnd">&nbsp;</span></span><span id="t2" class="tableTab"><span><a href="javascript:show(2);">Instance Methods</a></span><span class="tabEnd">&nbsp;</span></span><span id="t4" class="tableTab"><span><a href="javascript:show(8);">Concrete Methods</a></span><span class="tabEnd">&nbsp;</span></span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tr id="i0" class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/cli/GetConfigCommand.html#exec--">exec</a></span>()</code>&nbsp;</td>
</tr>
<tr id="i1" class="rowColor">
<td class="colFirst"><code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">CliCommand</a></code></td>
<td class="colLast"><code><span class="memberNameLink"><a href="../../../../org/apache/zookeeper/cli/GetConfigCommand.html#parse-java.lang.String:A-">parse</a></span>(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>[]&nbsp;cmdArgs)</code>
<div class="block">parse the command arguments</div>
</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods.inherited.from.class.org.apache.zookeeper.cli.CliCommand">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.zookeeper.cli.<a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">CliCommand</a></h3>
<code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html#addToMap-java.util.Map-">addToMap</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#getCmdStr--">getCmdStr</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#getOptionStr--">getOptionStr</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#getUsageStr--">getUsageStr</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#setErr-java.io.PrintStream-">setErr</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#setOut-java.io.PrintStream-">setOut</a>, <a href="../../../../org/apache/zookeeper/cli/CliCommand.html#setZk-org.apache.zookeeper.ZooKeeper-">setZk</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods.inherited.from.class.java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#clone--" title="class or interface in java.lang">clone</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#equals-java.lang.Object-" title="class or interface in java.lang">equals</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#finalize--" title="class or interface in java.lang">finalize</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#getClass--" title="class or interface in java.lang">getClass</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#hashCode--" title="class or interface in java.lang">hashCode</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notify--" title="class or interface in java.lang">notify</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#notifyAll--" title="class or interface in java.lang">notifyAll</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#toString--" title="class or interface in java.lang">toString</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait--" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-" title="class or interface in java.lang">wait</a>, <a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true#wait-long-int-" title="class or interface in java.lang">wait</a></code></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ========= CONSTRUCTOR DETAIL ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor.detail">
<!--   -->
</a>
<h3>Constructor Detail</h3>
<a name="GetConfigCommand--">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>GetConfigCommand</h4>
<pre>public&nbsp;GetConfigCommand()</pre>
</li>
</ul>
</li>
</ul>
<!-- ============ METHOD DETAIL ========== -->
<ul class="blockList">
<li class="blockList"><a name="method.detail">
<!--   -->
</a>
<h3>Method Detail</h3>
<a name="parse-java.lang.String:A-">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>parse</h4>
<pre>public&nbsp;<a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">CliCommand</a>&nbsp;parse(<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>[]&nbsp;cmdArgs)
                 throws <a href="../../../../org/apache/zookeeper/cli/CliParseException.html" title="class in org.apache.zookeeper.cli">CliParseException</a></pre>
<div class="block"><span class="descfrmTypeLabel">Description copied from class:&nbsp;<code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html#parse-java.lang.String:A-">CliCommand</a></code></span></div>
<div class="block">parse the command arguments</div>
<dl>
<dt><span class="overrideSpecifyLabel">Specified by:</span></dt>
<dd><code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html#parse-java.lang.String:A-">parse</a></code>&nbsp;in class&nbsp;<code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">CliCommand</a></code></dd>
<dt><span class="returnLabel">Returns:</span></dt>
<dd>this CliCommand</dd>
<dt><span class="throwsLabel">Throws:</span></dt>
<dd><code><a href="../../../../org/apache/zookeeper/cli/CliParseException.html" title="class in org.apache.zookeeper.cli">CliParseException</a></code></dd>
</dl>
</li>
</ul>
<a name="exec--">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>exec</h4>
<pre>public&nbsp;boolean&nbsp;exec()
             throws <a href="../../../../org/apache/zookeeper/cli/CliException.html" title="class in org.apache.zookeeper.cli">CliException</a></pre>
<dl>
<dt><span class="overrideSpecifyLabel">Specified by:</span></dt>
<dd><code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html#exec--">exec</a></code>&nbsp;in class&nbsp;<code><a href="../../../../org/apache/zookeeper/cli/CliCommand.html" title="class in org.apache.zookeeper.cli">CliCommand</a></code></dd>
<dt><span class="returnLabel">Returns:</span></dt>
<dt><span class="throwsLabel">Throws:</span></dt>
<dd><code><a href="../../../../org/apache/zookeeper/cli/CliException.html" title="class in org.apache.zookeeper.cli">CliException</a></code></dd>
</dl>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>
<!-- ========= END OF CLASS DATA ========= -->
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar.bottom">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.bottom" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.bottom.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/GetConfigCommand.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/cli/GetCommand.html" title="class in org.apache.zookeeper.cli"><span class="typeNameLink">Prev&nbsp;Class</span></a></li>
<li><a href="../../../../org/apache/zookeeper/cli/ListQuotaCommand.html" title="class in org.apache.zookeeper.cli"><span class="typeNameLink">Next&nbsp;Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/cli/GetConfigCommand.html" target="_top">Frames</a></li>
<li><a href="GetConfigCommand.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li><a href="#fields.inherited.from.class.org.apache.zookeeper.cli.CliCommand">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor.summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor.detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method.detail">Method</a></li>
</ul>
</div>
<a name="skip.navbar.bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &#169; 2008&#x2013;2021 <a href="https://www.apache.org/">The Apache Software Foundation</a>. All rights reserved.</small></p>
</body>
</html>
