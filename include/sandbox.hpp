#include <application.hpp>

class exampleLayer: public dg::layer {
public:
    exampleLayer(): layer("example") {}
public:
    void onUpdate() override {
        //DG_INFO("exampleLayer: update");
    }
    void onEvent(dg::event &e) override {
        (void)e;
        //DG_TRACE(e.toString());
    }
};

class sandbox: public dg::application {
public:
    sandbox(): application() {
        pushLayer(new exampleLayer());
        pushOverlay(new dg::imGuiLayer());
    }
    ~sandbox() = default;
};

inline dg::application *createApplication() {
    return new sandbox();
}