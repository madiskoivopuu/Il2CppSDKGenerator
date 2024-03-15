#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Buildingd60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Building>d__60"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BuilderWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = cDisplayClass600*> R& 8__1() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& attempts5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = GameDataEntity*> R& buildEntity5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& isDoorWall5__4() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Buildingd60*))(Il2CppBase() + 0x1116804))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Buildingd60*))(Il2CppBase() + 0x1116808))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Buildingd60*))(Il2CppBase() + 0x11177E8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Buildingd60*))(Il2CppBase() + 0x11177F0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Buildingd60*))(Il2CppBase() + 0x1117830))(this);
	}

};

