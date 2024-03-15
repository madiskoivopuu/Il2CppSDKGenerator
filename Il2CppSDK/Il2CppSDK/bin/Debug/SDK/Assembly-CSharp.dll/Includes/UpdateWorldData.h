#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateWorldData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateWorldData"));
	}

	 Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*& Blueprints() {
		return *(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R& _compressionBuffer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UpdateWorldHeaderSize() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> R Read(GameContext* context, uintptr_t reader) {
		return ((R (*)(UpdateWorldData*, GameContext*, uintptr_t))(Il2CppBase() + 0x15414B8))(this, context, reader);
	}
	template <typename R = void> static R Write(int64_t playerId, int64_t clanId, GameContext* context, uintptr_t writer) {
		return ((R (*)(void *, int64_t, int64_t, GameContext*, uintptr_t))(Il2CppBase() + 0x15417A4))(0, playerId, clanId, context, writer);
	}

};

