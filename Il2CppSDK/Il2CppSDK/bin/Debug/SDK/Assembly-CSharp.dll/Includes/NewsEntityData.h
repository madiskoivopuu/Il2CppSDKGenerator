#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsEntityData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& Date() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& InvalidationDate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ShowToNewPlayers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AvailablePlatforms() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NewsEntityData*))(Il2CppBase() + 0x13AF75C))(this);
	}

};

}
