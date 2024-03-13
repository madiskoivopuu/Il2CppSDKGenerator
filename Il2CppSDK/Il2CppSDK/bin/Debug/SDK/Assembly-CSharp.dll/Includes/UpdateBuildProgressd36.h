#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateBuildProgressd36
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateBuildProgress>d__36"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TrophyRoadWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& progressTime5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& revertStartProgressTime5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& startBuild5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& soundActivated5__5() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A2044))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A2048))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A21F0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A21F8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A2238))(this);
	}

};

