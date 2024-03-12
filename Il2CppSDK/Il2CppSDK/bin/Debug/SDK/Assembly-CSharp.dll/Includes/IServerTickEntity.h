#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IServerTickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IServerTickEntity"));
	}


	template <typename T = uintptr_t> T get_serverTick() {
		return ((T (*)(IServerTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasServerTick() {
		return ((T (*)(IServerTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddServerTick(int64_t newValue) {
		return ((T (*)(IServerTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceServerTick(int64_t newValue) {
		return ((T (*)(IServerTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveServerTick() {
		return ((T (*)(IServerTickEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
