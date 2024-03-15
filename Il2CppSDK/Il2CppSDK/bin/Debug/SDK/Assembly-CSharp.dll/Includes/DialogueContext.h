#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext2.h" 
#include "DialogueEntity.h" 

class DialogueContext : public BlueprintContext2<DialogueEntity*, DialogueEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ActorId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& TargetId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IdTick() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x110);
	}

	template <typename R = DialogueEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6DB4))(this, id);
	}
	template <typename R = DialogueEntity*> R GetEntityWithActorId(int32_t actorId) {
		return ((R (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6E90))(this, actorId);
	}
	 HashSet1<DialogueEntity*>* GetEntityWithTargetId(int32_t targetId) {
		return ((HashSet1<DialogueEntity*>* (*)(DialogueContext*, int32_t))(Il2CppBase() + 0xEC6F6C))(this, targetId);
	}
	template <typename R = DialogueEntity*> R Create(ICommonContexts* world, Il2CppString* dialogueName, GameEntity* actor, GameEntity* target) {
		return ((R (*)(DialogueContext*, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0xEC702C))(this, world, dialogueName, actor, target);
	}
	template <typename R = void> R RemoveFromActor(int32_t actorId, Nullable1<int32_t>* actionId) {
		return ((R (*)(DialogueContext*, int32_t, Nullable1<int32_t>*))(Il2CppBase() + 0xEC7E34))(this, actorId, actionId);
	}
	template <typename R = bool> R Remove(HashSet1<DialogueEntity*>* dialogues, Predicate1<DialogueEntity*>* predicate) {
		return ((R (*)(DialogueContext*, HashSet1<DialogueEntity*>*, Predicate1<DialogueEntity*>*))(Il2CppBase() + 0xEC7FA8))(this, dialogues, predicate);
	}

};

