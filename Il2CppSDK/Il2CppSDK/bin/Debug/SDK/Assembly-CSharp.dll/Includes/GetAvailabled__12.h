#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAvailabled12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAvailable>d__12"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& equipmentType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& 3__equipmentType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& account() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& 3__account() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> T& availableCosmetics5__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& 7__wrap3() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetAvailabled12*))(Il2CppBase() + 0x10B32F0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetAvailabled12*))(Il2CppBase() + 0x10B32F4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorItemEntity_get_Current() {
		return ((T (*)(GetAvailabled12*))(Il2CppBase() + 0x10B349C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetAvailabled12*))(Il2CppBase() + 0x10B34A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetAvailabled12*))(Il2CppBase() + 0x10B34E4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableItemEntity_GetEnumerator() {
		return ((T (*)(GetAvailabled12*))(Il2CppBase() + 0x10B34EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetAvailabled12*))(Il2CppBase() + 0x10B35B4))(this);
	}

};

}
