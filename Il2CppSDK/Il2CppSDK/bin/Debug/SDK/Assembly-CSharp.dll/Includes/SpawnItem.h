#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnItem"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = uint8_t> R& Orientation() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Nullable1float>*& Rotation() {
		return *(Nullable1float>**)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SpawnItem*, uintptr_t))(Il2CppBase() + 0x22A81E4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SpawnItem*, uintptr_t))(Il2CppBase() + 0x22A826C))(this, reader);
	}

};

