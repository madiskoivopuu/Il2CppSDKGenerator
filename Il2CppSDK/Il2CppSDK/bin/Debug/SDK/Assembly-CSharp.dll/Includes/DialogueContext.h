#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext2.h" 

class DialogueContext : public BlueprintContext2<DialogueEntity*, DialogueEntity*>
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
	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = DialogueEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6DB4))(this, id);
	}
	template <typename T = DialogueEntity*> T GetEntityWithActorId(int32_t actorId) {
		return ((T (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6E90))(this, actorId);
	}
	template <typename T = HashSet1DialogueEntity*>*> T GetEntityWithTargetId(int32_t targetId) {
		return ((T (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6F6C))(this, targetId);
	}
	template <typename T = DialogueEntity*> T Create(ICommonContexts* world, Il2CppString* dialogueName, GameEntity* actor, GameEntity* target) {
		return ((T (*)(DialogueContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0xEC702C))(this, world, dialogueName, actor, target);
	}
	template <typename T = void> T RemoveFromActor(int32_t actorId, Nullable1int32_t>* actionId) {
		return ((T (*)(DialogueContext*, int32_t, Nullable1int32_t>*))(Il2CppBase() + 0xEC7E34))(this, actorId, actionId);
	}
	template <typename T = bool> T Remove(HashSet1DialogueEntity*>* dialogues, Predicate1DialogueEntity*>* predicate) {
		return ((T (*)(DialogueContext*, HashSet1DialogueEntity*>*, Predicate1DialogueEntity*>*))(Il2CppBase() + 0xEC7FA8))(this, dialogues, predicate);
	}

};

