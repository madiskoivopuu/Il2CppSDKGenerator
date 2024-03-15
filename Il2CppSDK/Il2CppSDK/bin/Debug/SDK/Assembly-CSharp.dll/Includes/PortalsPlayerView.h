#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsPlayerView"));
	}

	template <typename R = uintptr_t> R& Condition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& RatingWrongColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& RatingStateIndex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& OnlineStateIndex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Bind(int64_t playerId, int64_t lobbyId) {
		return ((R (*)(PortalsPlayerView*, int64_t, int64_t))(Il2CppBase() + 0x16D3E5C))(this, playerId, lobbyId);
	}

};

