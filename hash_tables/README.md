<div class="wydVeRqMMtvFhbtm0Oda " style="transition: height 400ms linear 0s; height: auto;"><div class="ya7hOTvkcvOlBTsWTi3l"><ul class="ejluTAOsy5VUAKh6nRV3"><li><h4 class="MeFGWxW4GIK5soMCM_Qe">Hash Table</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>
  A data structure that provides fast insertion, deletion, and lookup of
  key/value pairs.
</p>
<p>
  Under the hood, a hash table uses a <b>dynamic array</b> of
  <b>linked lists</b> to efficiently store key/value pairs. When inserting a
  key/value pair, a hash function first maps the key, which is typically a
  string (or any data that can be hashed, depending on the implementation of the
  hash table), to an integer value and, by extension, to an index in the
  underlying dynamic array. Then, the value associated with the key is added to
  the linked list stored at that index in the dynamic array, and a reference to
  the key is also stored with the value.
</p>
<p>
  Hash tables rely on highly optimized hash functions to minimize the number of
  <b>collisions</b> that occur when storing values: cases where two keys map to
  the same index.
</p>
<p>Below is an example of what a hash table might look like under the hood:</p>
<pre>[
  0: (value1, key1) -&gt; null
  1: (value2, key2) -&gt; (value3, key3) -&gt; (value4, key4)
  2: (value5, key5) -&gt; null
  3: (value6, key6) -&gt; null
  4: null
  5: (value7, key7) -&gt; (value8, key8)
  6: (value9, key9) -&gt; null
]
</pre>
<p>
  In the hash table above, the keys <b>key2</b>, <b>key3</b>, and
  <b>key4</b> collided by all being hashed to <b>1</b>, and the keys
  <b>key7</b> and <b>key8</b> collided by both being hashed to <b>5</b>.
</p>
<p>
  The following are a hash table's standard operations and their corresponding
  time complexities:
</p>
<ul>
  <li>
    <b>Inserting a key/value pair</b>: O(1) on average; O(n) in the worse case
  </li>
  <li>
    <b>Removing a key/value pair</b>: O(1) on average; O(n) in the worse case
  </li>
  <li><b>Looking up a key</b>: O(1) on average; O(n) in the worse case</li>
</ul>
<p>
  The worst-case linear-time operations occur when a hash table experiences a
  lot of collisions, leading to long linked lists internally, which take O(n)
  time to traverse.
</p>
<p>
  However, in practice and especially in coding interviews, we typically assume
  that the hash functions employed by hash tables are so optimized that
  collisions are extremely rare and constant-time operations are all but
  guaranteed.
</p>
</div></div></li></ul></div></div><div class="wydVeRqMMtvFhbtm0Oda " style="transition: height 400ms linear 0s; height: auto;"><div class="ya7hOTvkcvOlBTsWTi3l"><ul class="ejluTAOsy5VUAKh6nRV3"><li><h4 class="MeFGWxW4GIK5soMCM_Qe">Hash Table</h4><div class="wER9hC6Ayr8OWkXr4hrQ default"><div class="html">
<p>
  A data structure that provides fast insertion, deletion, and lookup of
  key/value pairs.
</p>
<p>
  Under the hood, a hash table uses a <b>dynamic array</b> of
  <b>linked lists</b> to efficiently store key/value pairs. When inserting a
  key/value pair, a hash function first maps the key, which is typically a
  string (or any data that can be hashed, depending on the implementation of the
  hash table), to an integer value and, by extension, to an index in the
  underlying dynamic array. Then, the value associated with the key is added to
  the linked list stored at that index in the dynamic array, and a reference to
  the key is also stored with the value.
</p>
<p>
  Hash tables rely on highly optimized hash functions to minimize the number of
  <b>collisions</b> that occur when storing values: cases where two keys map to
  the same index.
</p>
<p>Below is an example of what a hash table might look like under the hood:</p>
<pre>[
  0: (value1, key1) -&gt; null
  1: (value2, key2) -&gt; (value3, key3) -&gt; (value4, key4)
  2: (value5, key5) -&gt; null
  3: (value6, key6) -&gt; null
  4: null
  5: (value7, key7) -&gt; (value8, key8)
  6: (value9, key9) -&gt; null
]
</pre>
<p>
  In the hash table above, the keys <b>key2</b>, <b>key3</b>, and
  <b>key4</b> collided by all being hashed to <b>1</b>, and the keys
  <b>key7</b> and <b>key8</b> collided by both being hashed to <b>5</b>.
</p>
<p>
  The following are a hash table's standard operations and their corresponding
  time complexities:
</p>
<ul>
  <li>
    <b>Inserting a key/value pair</b>: O(1) on average; O(n) in the worse case
  </li>
  <li>
    <b>Removing a key/value pair</b>: O(1) on average; O(n) in the worse case
  </li>
  <li><b>Looking up a key</b>: O(1) on average; O(n) in the worse case</li>
</ul>
<p>
  The worst-case linear-time operations occur when a hash table experiences a
  lot of collisions, leading to long linked lists internally, which take O(n)
  time to traverse.
</p>
<p>
  However, in practice and especially in coding interviews, we typically assume
  that the hash functions employed by hash tables are so optimized that
  collisions are extremely rare and constant-time operations are all but
  guaranteed.
</p>
</div></div></li></ul></div></div>
