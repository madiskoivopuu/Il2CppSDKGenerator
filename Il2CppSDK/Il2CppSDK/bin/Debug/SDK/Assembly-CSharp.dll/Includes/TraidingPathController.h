#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TraidingPathController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraidingPathController"));
	}

	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _shipPrefabs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ship_path() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _portDelay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _endDelay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& _timeBetween() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _speed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& _timeleft() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _speed2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _waterResist() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _portPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TraidingPathController*))(Il2CppBase() + 0x1511980))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(TraidingPathController*))(Il2CppBase() + 0x1511B08))(this);
	}
	template <typename T = uintptr_t> T SpawnShip(int32_t posAtLine, int32_t shipId) {
		return ((T (*)(TraidingPathController*, int32_t, int32_t))(Il2CppBase() + 0x1511A7C))(this, posAtLine, shipId);
	}

};

