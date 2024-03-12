#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapPingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapPingData"));
	}

	template <typename T = float> T& XPos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& YPos() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& OwnerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MinimapPingData*, uintptr_t))(Il2CppBase() + 0x12D3A9C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MinimapPingData*, uintptr_t))(Il2CppBase() + 0x12D3B10))(this, reader);
	}

};

}
