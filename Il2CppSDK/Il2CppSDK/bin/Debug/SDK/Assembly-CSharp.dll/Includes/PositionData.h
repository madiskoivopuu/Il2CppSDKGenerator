#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& PosX() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& PosY() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& VelX() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& VelY() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R Write(uintptr_t writer, bool moveEntity) {
		return ((R (*)(PositionData*, uintptr_t, bool))(Il2CppBase() + 0x16D51A8))(this, writer, moveEntity);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkEnd) {
		return ((R (*)(PositionData*, uintptr_t, bool))(Il2CppBase() + 0x16D5258))(this, reader, checkEnd);
	}
	template <typename R = int32_t> static R MaxSize(bool withCommand) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x16D5430))(0, withCommand);
	}

};

