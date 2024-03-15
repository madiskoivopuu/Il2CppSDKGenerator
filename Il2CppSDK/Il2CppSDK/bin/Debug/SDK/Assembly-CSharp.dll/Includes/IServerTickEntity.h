#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IServerTickEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IServerTickEntity"));
	}


	template <typename R = ServerTickComponent*> R get_serverTick() {
		return ((R (*)(IServerTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasServerTick() {
		return ((R (*)(IServerTickEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddServerTick(int64_t newValue) {
		return ((R (*)(IServerTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceServerTick(int64_t newValue) {
		return ((R (*)(IServerTickEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveServerTick() {
		return ((R (*)(IServerTickEntity*))(Il2CppBase() + 0x0))(this);
	}

};

