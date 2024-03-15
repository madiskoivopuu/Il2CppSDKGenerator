#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateBuildProgressd36
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateBuildProgress>d__36"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TrophyRoadWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& progressTime5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& revertStartProgressTime5__3() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& startBuild5__4() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& soundActivated5__5() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A2044))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A2048))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A21F0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A21F8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(UpdateBuildProgressd36*))(Il2CppBase() + 0x22A2238))(this);
	}

};

