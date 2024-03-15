#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapImageGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapImageGenerator"));
	}

	template <typename R = Il2CppString*> R& worldFile() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& locationFile() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& outputPath() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& worldSize() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& imageSize() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& drawMobs() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = uintptr_t> R& mainCamera() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& renderTexture() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = ClientDataContexts*> R& _contexts() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> static R& NONE_PREFAB() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& EMPTY_PREFAB() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(MapImageGenerator*))(Il2CppBase() + 0x1270D4C))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(MapImageGenerator*))(Il2CppBase() + 0x1271328))(this);
	}
	template <typename R = void> R RendererImage() {
		return ((R (*)(MapImageGenerator*))(Il2CppBase() + 0x1273840))(this);
	}
	template <typename R = void> R OnLocation(EntityBlueprint* location) {
		return ((R (*)(MapImageGenerator*, EntityBlueprint*))(Il2CppBase() + 0x1272FD8))(this, location);
	}
	 static Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* ParseList(Il2CppString* jsonString, Il2CppArray<Il2CppString*>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* (*)(void *, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1271FAC))(0, jsonString, componentNames, componentTypes);
	}
	template <typename R = Il2CppString*> static R GetFullName(Il2CppDictionary<Il2CppString*, Il2CppString*>* names, Il2CppString* name) {
		return ((R (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1273B20))(0, names, name);
	}
	template <typename R = EntityBlueprint*> static R ParseEntity(Il2CppString* jsonString, Il2CppArray<Il2CppString*>* componentNames, Il2CppArray<uintptr_t>* componentTypes) {
		return ((R (*)(void *, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1272A80))(0, jsonString, componentNames, componentTypes);
	}

};

