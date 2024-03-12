#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsPlayerView"));
	}

	template <typename T = uintptr_t> T& Condition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RatingWrongColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& RatingStateIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OnlineStateIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Bind(int64_t playerId, int64_t lobbyId) {
		return ((T (*)(PortalsPlayerView*, int64_t, int64_t))(Il2CppBase() + 0x16D3E5C))(this, playerId, lobbyId);
	}

};

}
