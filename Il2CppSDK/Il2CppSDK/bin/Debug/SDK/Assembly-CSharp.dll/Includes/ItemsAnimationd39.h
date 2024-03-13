#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemsAnimationd39
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ItemsAnimation>d__39"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = StoreGachaDetailedWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& rollCount5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rollData5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Resource*> T& baseRes5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Resource*>*> T& additionalResList5__5() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = EnumeratorStoreProductContentSlotView*>*> T& 7__wrap5() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CD66C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CD6DC))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CD688))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CE668))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CE670))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CE6B0))(this);
	}

};

