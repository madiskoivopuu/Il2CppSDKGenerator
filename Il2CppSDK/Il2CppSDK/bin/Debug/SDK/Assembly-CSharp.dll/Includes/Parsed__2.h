#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parsed2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Parse>d__2"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 3__reader() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = char> T& qualifier() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = char> T& 3__qualifier() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = char> T& delimiter() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = char> T& 3__delimiter() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = bool> T& inQuote5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& record5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& sb5__4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& charArray5__5() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Parsed2*))(Il2CppBase() + 0x115E420))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Parsed2*))(Il2CppBase() + 0x115E424))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorSystem_Collections_Generic_IListSystem_String_get_Current() {
		return ((T (*)(Parsed2*))(Il2CppBase() + 0x115EA28))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Parsed2*))(Il2CppBase() + 0x115EA30))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Parsed2*))(Il2CppBase() + 0x115EA70))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Collections_Generic_IListSystem_String_GetEnumerator() {
		return ((T (*)(Parsed2*))(Il2CppBase() + 0x115EA78))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(Parsed2*))(Il2CppBase() + 0x115EB38))(this);
	}

};

}
