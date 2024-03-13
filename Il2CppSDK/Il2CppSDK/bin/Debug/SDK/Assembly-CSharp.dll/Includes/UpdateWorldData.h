#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateWorldData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateWorldData"));
	}

	template <typename T = Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& Blueprints() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _compressionBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UpdateWorldHeaderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T Read(GameContext* context, uintptr_t reader) {
		return ((T (*)(UpdateWorldData*, GameContext*, uintptr_t))(Il2CppBase() + 0x15414B8))(this, context, reader);
	}
	template <typename T = void> static T Write(int64_t playerId, int64_t clanId, GameContext* context, uintptr_t writer) {
		return ((T (*)(void *, int64_t, int64_t, GameContext*, uintptr_t))(Il2CppBase() + 0x15417A4))(0, playerId, clanId, context, writer);
	}

};

