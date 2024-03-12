#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewCoverSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewCoverSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _targets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _covers() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& COVER_SINGLE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ViewCoverSystem*))(Il2CppBase() + 0x15C8338))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ViewCoverSystem*))(Il2CppBase() + 0x15C85D4))(this);
	}

};

}
