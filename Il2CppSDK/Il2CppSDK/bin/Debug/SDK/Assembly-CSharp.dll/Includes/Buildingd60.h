#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Buildingd60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Building>d__60"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = BuilderWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = cDisplayClass600*> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& attempts5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = GameDataEntity*> T& buildEntity5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isDoorWall5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Buildingd60*))(Il2CppBase() + 0x1116804))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Buildingd60*))(Il2CppBase() + 0x1116808))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Buildingd60*))(Il2CppBase() + 0x11177E8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Buildingd60*))(Il2CppBase() + 0x11177F0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Buildingd60*))(Il2CppBase() + 0x1117830))(this);
	}

};

