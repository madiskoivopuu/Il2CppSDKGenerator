#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetsSelectorHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetsSelectorHelper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& _buffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _oneTargetProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _listTargetProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _splashTargetProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _repeatMagicProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> static T SelectTargets(uintptr_t world, uintptr_t selector, uintptr_t actor, Il2CppList<uintptr_t>* result, void* overrideMaxCount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, void*))(Il2CppBase() + 0x16A6D70))(0, world, selector, actor, result, overrideMaxCount);
	}
	template <typename T = int32_t> static T SelectTargets_1(uintptr_t world, uintptr_t selector, uintptr_t actor, uintptr_t center, Il2CppList<uintptr_t>* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x16A8384))(0, world, selector, actor, center, result);
	}
	template <typename T = uintptr_t> static T SelectTarget(uintptr_t world, uintptr_t selector, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A8568))(0, world, selector, actor);
	}
	template <typename T = void> static T ProcessSplash(uintptr_t world, uintptr_t magic, uintptr_t splashComponent, uintptr_t splashCenter, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A8768))(0, world, magic, splashComponent, splashCenter, actor);
	}
	template <typename T = void> static T ProcessRepeatMagic(uintptr_t world, uintptr_t magic, uintptr_t repeatMagicComponent, uintptr_t center, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A8AAC))(0, world, magic, repeatMagicComponent, center, actor);
	}
	template <typename T = bool> static T CheckTarget(uintptr_t world, uintptr_t selector, uintptr_t actor, uintptr_t center, int32_t actorId, uintptr_t source, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A8E80))(0, world, selector, actor, center, actorId, source, target);
	}
	template <typename T = int32_t> static T ProcessTargets(uintptr_t world, uintptr_t selector, uintptr_t actor, uintptr_t center, float centerRotation, int32_t actorId, uintptr_t source, uintptr_t processor, void* overrideMaxCount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, int32_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x16A6F54))(0, world, selector, actor, center, centerRotation, actorId, source, processor, overrideMaxCount);
	}
	template <typename T = bool> static T ProcessTargetsg__ProcessTarget|15_0(uintptr_t target, bool validTarget, uintptr_t ) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x16A96BC))(0, target, validTarget, );
	}

};

}
