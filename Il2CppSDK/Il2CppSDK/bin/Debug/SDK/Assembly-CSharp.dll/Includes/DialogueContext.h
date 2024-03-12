#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext`2" 

class DialogueContext: BlueprintContext2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TargetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IdTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = uintptr_t> T GetEntityWithId(int32_t id) {
		return ((T (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6DB4))(this, id);
	}
	template <typename T = uintptr_t> T GetEntityWithActorId(int32_t actorId) {
		return ((T (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6E90))(this, actorId);
	}
	template <typename T = void*> T GetEntityWithTargetId(int32_t targetId) {
		return ((T (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6F6C))(this, targetId);
	}
	template <typename T = uintptr_t> T Create(uintptr_t world, Il2CppString* dialogueName, uintptr_t actor, uintptr_t target) {
		return ((T (*)(DialogueContext*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEC702C))(this, world, dialogueName, actor, target);
	}
	template <typename T = void> T RemoveFromActor(int32_t actorId, void* actionId) {
		return ((T (*)(DialogueContext*, int32_t, void*))(Il2CppBase() + 0xEC7E34))(this, actorId, actionId);
	}
	template <typename T = bool> T Remove(void* dialogues, void* predicate) {
		return ((T (*)(DialogueContext*, void*, void*))(Il2CppBase() + 0xEC7FA8))(this, dialogues, predicate);
	}

};

}
