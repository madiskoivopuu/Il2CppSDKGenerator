#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAddDataToWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAddDataToWorldRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& JsonDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& jsonData_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CallbackIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& callbackID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CellOwnerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& cellOwner_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& clan_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x189CC38))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x189CC9C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CDBC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CEF0))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CF4C))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaAddDataToWorldRequest*, int64_t))(Il2CppBase() + 0x189CF54))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CF5C))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(ArenaAddDataToWorldRequest*, int32_t))(Il2CppBase() + 0x189CF64))(this, value);
	}
	template <typename T = Il2CppString*> T get_JsonData() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CF6C))(this);
	}
	template <typename T = void> T set_JsonData(Il2CppString* value) {
		return ((T (*)(ArenaAddDataToWorldRequest*, Il2CppString*))(Il2CppBase() + 0x189CF74))(this, value);
	}
	template <typename T = int64_t> T get_CallbackID() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CFF4))(this);
	}
	template <typename T = void> T set_CallbackID(int64_t value) {
		return ((T (*)(ArenaAddDataToWorldRequest*, int64_t))(Il2CppBase() + 0x189CFFC))(this, value);
	}
	template <typename T = int64_t> T get_CellOwner() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D004))(this);
	}
	template <typename T = void> T set_CellOwner(int64_t value) {
		return ((T (*)(ArenaAddDataToWorldRequest*, int64_t))(Il2CppBase() + 0x189D00C))(this, value);
	}
	template <typename T = uintptr_t> T get_Clan() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D014))(this);
	}
	template <typename T = void> T set_Clan(uintptr_t value) {
		return ((T (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D01C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D024))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D094))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D138))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D21C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D280))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D3BC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D574))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D668))(this, input);
	}

};

}
