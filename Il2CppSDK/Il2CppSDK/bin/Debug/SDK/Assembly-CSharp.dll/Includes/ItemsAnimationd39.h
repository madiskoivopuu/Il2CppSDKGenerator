#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemsAnimationd39
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ItemsAnimation>d__39"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = StoreGachaDetailedWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& rollCount5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<GachaResources>*> R& rollData5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Resource> R& baseRes5__4() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppList<Resource>*& additionalResList5__5() {
		return *(Il2CppList<Resource>**)((uintptr_t)this + 0x50);
	}
	 Enumerator<StoreProductContentSlotView*>*& 7__wrap5() {
		return *(Enumerator<StoreProductContentSlotView*>**)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CD66C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CD6DC))(this);
	}
	template <typename R = void> R m__Finally1() {
		return ((R (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CD688))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CE668))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CE670))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ItemsAnimationd39*))(Il2CppBase() + 0x10CE6B0))(this);
	}

};

