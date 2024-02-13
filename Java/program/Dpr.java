package Java.program;
// Class Declaration

public class Dpr {
    // Private attributes
    private String name;
    private String id;
    private String bidang;
    private String partai;

    // Constructor

    // Constructor yang tidak mengembalikan return nilai
    public Dpr() {
        this.name = "";
        this.id = "";
        this.bidang = "";
        this.partai = "";
    }

    // Constructor dengan parameter nilai yang disesuaikan
    public Dpr(String name, String id, String bidang, String partai) {
        this.name = name;
        this.id = id;
        this.bidang = bidang;
        this.partai = partai;
    }

    // Getter dan Setter

    // Get name
    public String getName() {
        return this.name;
    }    
    
    // set name dpr
    public void setName(String name) {
        this.name = name;
    }

    // Get id
    public String getid() {
        return this.id;
    }    
    
    // set id dpr
    public void setid(String id) {
        this.id = id;
    }

    // Get bidang
    public String getBidang() {
        return this.bidang;
    }    
    
    // set id bidang
    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    // Get partai
    public String getPartai() {
        return this.partai;
    }    
    
    // set id partai
    public void setPartai(String partai) {
        this.partai = partai;
    }

    // Java tidak memerlukan destructors
}