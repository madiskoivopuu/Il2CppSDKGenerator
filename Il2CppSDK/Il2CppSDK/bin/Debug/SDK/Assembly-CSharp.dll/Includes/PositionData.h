#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& PosX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& PosY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& VelX() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& VelY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Write(uintptr_t writer, bool moveEntity) {
		return ((T (*)(PositionData*, uintptr_t, bool))(Il2CppBase() + 0x16D51A8))(this, writer, moveEntity);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkEnd) {
		return ((T (*)(PositionData*, uintptr_t, bool))(Il2CppBase() + 0x16D5258))(this, reader, checkEnd);
	}
	template <typename T = int32_t> static T MaxSize(bool withCommand) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x16D5430))(0, withCommand);
	}

};

