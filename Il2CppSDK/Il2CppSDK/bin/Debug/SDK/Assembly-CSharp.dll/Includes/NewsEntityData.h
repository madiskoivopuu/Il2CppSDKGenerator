#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsEntityData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Title() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& Date() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int64_t> R& InvalidationDate() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& ShowToNewPlayers() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = AvailablePlatform> R& AvailablePlatforms() {
		return *(R*)((uintptr_t)this + 0x3C);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(NewsEntityData*))(Il2CppBase() + 0x13AF75C))(this);
	}

};

