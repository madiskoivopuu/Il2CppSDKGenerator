#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parsed2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Parse>d__2"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IList1<Il2CppString*>*& 2__current() {
		return *(IList1<Il2CppString*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& l__initialThreadId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& reader() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& 3__reader() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = char> R& qualifier() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = char> R& 3__qualifier() {
		return *(R*)((uintptr_t)this + 0x3A);
	}
	template <typename R = char> R& delimiter() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = char> R& 3__delimiter() {
		return *(R*)((uintptr_t)this + 0x3E);
	}
	template <typename R = bool> R& inQuote5__2() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppList<Il2CppString*>*& record5__3() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& sb5__4() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<char>*> R& charArray5__5() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Parsed2*))(Il2CppBase() + 0x115E420))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Parsed2*))(Il2CppBase() + 0x115E424))(this);
	}
	 IList1<Il2CppString*>* System_Collections_Generic_IEnumeratorSystem_Collections_Generic_IListSystem_String_get_Current() {
		return ((IList1<Il2CppString*>* (*)(Parsed2*))(Il2CppBase() + 0x115EA28))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Parsed2*))(Il2CppBase() + 0x115EA30))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Parsed2*))(Il2CppBase() + 0x115EA70))(this);
	}
	 IEnumerator1<IList1<Il2CppString*>*>* System_Collections_Generic_IEnumerableSystem_Collections_Generic_IListSystem_String_GetEnumerator() {
		return ((IEnumerator1<IList1<Il2CppString*>*>* (*)(Parsed2*))(Il2CppBase() + 0x115EA78))(this);
	}
	template <typename R = uintptr_t> R System_Collections_IEnumerable_GetEnumerator() {
		return ((R (*)(Parsed2*))(Il2CppBase() + 0x115EB38))(this);
	}

};

