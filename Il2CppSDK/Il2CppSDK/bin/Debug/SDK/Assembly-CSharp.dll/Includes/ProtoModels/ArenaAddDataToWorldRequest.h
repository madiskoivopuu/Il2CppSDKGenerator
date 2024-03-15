#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAddDataToWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAddDataToWorldRequest"));
	}

	 static MessageParser1ProtoModels::ArenaAddDataToWorldRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaAddDataToWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CellIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& JsonDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& jsonData_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CallbackIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& callbackID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CellOwnerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& cellOwner_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& ClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& clan_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1ProtoModels::ArenaAddDataToWorldRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaAddDataToWorldRequest*>* (*)(void *))(Il2CppBase() + 0x189CC38))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x189CC9C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CDBC))(this);
	}
	template <typename R = ProtoModels::ArenaAddDataToWorldRequest*> R Clone() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CEF0))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CF4C))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaAddDataToWorldRequest*, int64_t))(Il2CppBase() + 0x189CF54))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CF5C))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(ArenaAddDataToWorldRequest*, int32_t))(Il2CppBase() + 0x189CF64))(this, value);
	}
	template <typename R = Il2CppString*> R get_JsonData() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CF6C))(this);
	}
	template <typename R = void> R set_JsonData(Il2CppString* value) {
		return ((R (*)(ArenaAddDataToWorldRequest*, Il2CppString*))(Il2CppBase() + 0x189CF74))(this, value);
	}
	template <typename R = int64_t> R get_CallbackID() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189CFF4))(this);
	}
	template <typename R = void> R set_CallbackID(int64_t value) {
		return ((R (*)(ArenaAddDataToWorldRequest*, int64_t))(Il2CppBase() + 0x189CFFC))(this, value);
	}
	template <typename R = int64_t> R get_CellOwner() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D004))(this);
	}
	template <typename R = void> R set_CellOwner(int64_t value) {
		return ((R (*)(ArenaAddDataToWorldRequest*, int64_t))(Il2CppBase() + 0x189D00C))(this, value);
	}
	template <typename R = ProtoModels::Clan*> R get_Clan() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D014))(this);
	}
	template <typename R = void> R set_Clan(ProtoModels::Clan* value) {
		return ((R (*)(ArenaAddDataToWorldRequest*, ProtoModels::Clan*))(Il2CppBase() + 0x189D01C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaAddDataToWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x189D024))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaAddDataToWorldRequest* other) {
		return ((R (*)(ArenaAddDataToWorldRequest*, ProtoModels::ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D094))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D138))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D21C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D280))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D3BC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaAddDataToWorldRequest* other) {
		return ((R (*)(ArenaAddDataToWorldRequest*, ProtoModels::ArenaAddDataToWorldRequest*))(Il2CppBase() + 0x189D574))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaAddDataToWorldRequest*, uintptr_t))(Il2CppBase() + 0x189D668))(this, input);
	}

};

}
